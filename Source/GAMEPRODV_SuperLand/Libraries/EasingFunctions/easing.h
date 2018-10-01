#pragma once 

enum Ease
{
	EaseInSine,
	EaseOutSine,
	EaseInOutSine,
	EaseInQuad,
	EaseOutQuad,
	EaseInOutQuad,
	EaseInCubic,
	EaseOutCubic,
	EaseInOutCubic,
	EaseInQuart,
	EaseOutQuart,
	EaseInOutQuart,
	EaseInQuint,
	EaseOutQuint,
	EaseInOutQuint,
	EaseInExpo,
	EaseOutExpo,
	EaseInOutExpo,
	EaseInCirc,
	EaseOutCirc,
	EaseInOutCirc,
	EaseInBack,
	EaseOutBack,
	EaseInOutBack,
	EaseInElastic,
	EaseOutElastic,
	EaseInOutElastic,
	EaseInBounce,
	EaseOutBounce,
	EaseInOutBounce
};

typedef float(*EasingFunction)(float);

EasingFunction GetEasingFunction(Ease function);
