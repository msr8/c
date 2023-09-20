import pandas as pd

def read_csv() -> pd.DataFrame:
    try:
        df = pd.read_csv('users.csv')
        return df
    except FileNotFoundError:
        return pd.DataFrame(columns=['username', 'password'])


def create(username, password) -> None:
    df = read_csv()

    # If username already exists, update the password
    if username in df['username'].values:
        cond = df['username'] == username
        df.loc[cond, 'password'] = password
    # Else, add a new row
    else:
        new_row = pd.DataFrame( [[username, password]] , columns=['username', 'password'] )
        df      = pd.concat( [df, new_row] )
    
    df.to_csv('users.csv', index=False)



def search(username) -> None | dict[str,str]:
    df   = read_csv()
    # If username does not exist, return None
    if username not in df['username'].values:
        return None
    # Else, return the user's data
    cond = df['username'] == username
    return df[cond].to_dict('records')[0]



create('mark', '17j')
search('mark')
create('mark', '18j')
search('mark')
