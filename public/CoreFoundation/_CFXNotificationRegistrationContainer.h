//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase
{
    CDStruct_a86bd46d _children;
}

+ (Class)childClass;
- (_Bool)enumerate:(CDUnknownBlockType)arg1;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)dealloc;
- (void)resetChildren;
- (void)invalidate;
- (id)initWithParent:(id)arg1 childKeyCallbacks:(const CDStruct_90be15af *)arg2;
- (id)initWithParent:(id)arg1;

@end

