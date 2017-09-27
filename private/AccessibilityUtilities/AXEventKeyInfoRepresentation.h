//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AXEventRepresentationDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface AXEventKeyInfoRepresentation : NSObject <AXEventRepresentationDescription, NSSecureCoding, NSCopying>
{
    _Bool _keyDown;
    unsigned short _keyCode;
    unsigned short _alternativeKeyCode;
    unsigned int _usagePage;
    unsigned int _modifierState;
    NSString *_unmodifiedInput;
    NSString *_modifiedInput;
    NSString *_shiftModifiedInput;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned int modifierState; // @synthesize modifierState=_modifierState;
@property(retain, nonatomic) NSString *shiftModifiedInput; // @synthesize shiftModifiedInput=_shiftModifiedInput;
@property(retain, nonatomic) NSString *modifiedInput; // @synthesize modifiedInput=_modifiedInput;
@property(retain, nonatomic) NSString *unmodifiedInput; // @synthesize unmodifiedInput=_unmodifiedInput;
@property(nonatomic) _Bool keyDown; // @synthesize keyDown=_keyDown;
@property(nonatomic) unsigned int usagePage; // @synthesize usagePage=_usagePage;
@property(nonatomic) unsigned short alternativeKeyCode; // @synthesize alternativeKeyCode=_alternativeKeyCode;
@property(nonatomic) unsigned short keyCode; // @synthesize keyCode=_keyCode;
- (void).cxx_destruct;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)translateKeycode;
- (void)translateStringToKeycode;
- (struct __GSKeyboard *)_getUIKitKeyboardRef;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

