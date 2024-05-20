import java.sql.*;

class Main {
    public static void main(String[] args) throws ClassNotFoundException, SQLException {
        // Loading the driver
        Class.forName("com.mysql.cj.jdbc.Driver");
        // Establishing the connection
        Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/college", "root", "password");
        
        // Statement
        Statement stmt = conn.createStatement();
        stmt.executeUpdate("create table student(id int, name varchar(20), age int)");
        
        // Prepared Statement
        PreparedStatement pstmt = conn.prepareStatement("insert into student values(?, ?, ?)");
        pstmt.setInt(1, 1);
        pstmt.setString(2, "John Doe");
        pstmt.setInt(3, 20);
        pstmt.executeUpdate();
        // Add another student using pstmt
        pstmt.setInt(1, 2);
        pstmt.setString(2, "Alex Benjamin");
        pstmt.setInt(3, 21);
        pstmt.executeUpdate();

        // ResultSet
        ResultSet rs = stmt.executeQuery("select * from student");
        while(rs.next()){
            System.out.println(rs.getInt(1) + " " + rs.getString(2) + " " + rs.getInt(3));
        }

        // Closing all the resources (from recent to old)
        rs.close();
        pstmt.close();
        stmt.close();
        conn.close();
    }
}