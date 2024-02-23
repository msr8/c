
    let element;

    // The element with the class "a"
    element = document.getElementById('main');
    let childElement = document.getElementById('child');

    childElement.innerHTML = 'This is text';
    element.appendChild(childElement);

    console.log('huh');
