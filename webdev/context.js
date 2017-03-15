//context === this
var obj = {
    foo: function (){
        console.log(this ===  window);
    }
};
//call apply and bind
var myBoundFoo = obj.foo.bind(window);
//call and apply are the same thing
myBoundFoo()
