//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, XCKeyboardKeyMap;

@interface XCKeyboardLayout : NSObject
{
    struct __GSKeyboard *_source;
    NSString *_identifier;
    NSData *_data;
    NSArray *_keyMaps;
    XCKeyboardKeyMap *_primaryKeyMap;
}

+ (id)unicodeHexKeyboardLayout;
+ (id)currentKeyboardLayout;
+ (void)enumerateKeyboardLayoutsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)keyboardLayoutWithInputSource:(struct __GSKeyboard *)arg1;
+ (id)keyboardLayoutWithIdentifier:(id)arg1;
@property(readonly) XCKeyboardKeyMap *primaryKeyMap; // @synthesize primaryKeyMap=_primaryKeyMap;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)deactivate:(id)arg1 error:(id *)arg2;
- (id)activateWithError:(id *)arg1;
- (id)_setActiveLayoutState:(id)arg1 error:(id *)arg2;
- (void)enumerateKeyMapsUsingBlock:(CDUnknownBlockType)arg1;
- (id)description;
- (id)keyMapForKeyboardType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithInputSource:(struct __GSKeyboard *)arg1;
- (id)init;

@end

