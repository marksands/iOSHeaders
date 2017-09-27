//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameController/GCControllerDirectionPad.h>

@class NSString, _GCControllerAxisInput;

@interface _GCControllerDirectionPad : GCControllerDirectionPad
{
    CDUnknownBlockType _valueChangedHandler;
    _GCControllerAxisInput *_xAxis;
    _GCControllerAxisInput *_yAxis;
    NSString *_descriptionName;
}

- (id)yAxis;
- (id)xAxis;
- (void)setValueChangedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)valueChangedHandler;
- (void).cxx_destruct;
- (id)right;
- (id)left;
- (id)down;
- (id)up;
- (id)description;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1 queue:(id)arg2;
- (_Bool)setHIDValue:(struct __IOHIDValue *)arg1;
- (void)_fireValueChangedWithQueue:(id)arg1;
- (void)_fireValueChanged;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2 descriptionName:(id)arg3;
- (id)initWithFlippedY:(_Bool)arg1 digital:(_Bool)arg2;

@end

