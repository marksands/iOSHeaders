//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAction.h"
#import "CAMediaTiming.h"
#import "CAPropertyInfo.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "NSSecureCoding.h"

@class CAMediaTimingFunction, CAStateControllerTransition, NSString;

@interface CAAnimation : NSObject <NSMutableCopying, CAPropertyInfo, NSSecureCoding, NSCopying, CAMediaTiming, CAAction>
{
    void *_attr;
    unsigned int _flags;
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (_Bool)CA_encodesPropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (id)animation;
+ (id)defaultValueForKey:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (CDUnknownFunctionPointerType)CA_getterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (CDUnknownFunctionPointerType)CA_setterForProperty:(const struct _CAPropertyInfo *)arg1;
+ (id)properties;
@property(retain) id <CAAnimationDelegate> delegate;
@property(retain) CAMediaTimingFunction *timingFunction;
@property(getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property(copy) NSString *fillMode;
@property _Bool autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property float speed;
@property double duration;
@property double timeOffset;
@property double beginTime;
- (_Bool)removedOnCompletion;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)shouldArchiveValueForKey:(id)arg1;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (void)dealloc;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
@property(copy) NSString *beginTimeMode;
@property _Bool discretizesTime;
@property double frameInterval;
@property(getter=isEnabled) _Bool enabled;
@property long long preferredFramesPerSecond;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)setDefaultDuration:(double)arg1;

// Remaining properties
@property __weak CAStateControllerTransition *CAStateControllerTransition; // @dynamic CAStateControllerTransition;

@end

