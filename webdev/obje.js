var notAPrimitive = {property1: "foo", property2:5};
//fancy object lit notation
document.getElementById("result1").textContent = typeof(notAPrimitive);
document.getElementById("result2").textContent = typeof(notAPrimitive.property1);
document.getElementById("result3").textContent = typeof(notAPrimitive.property2);