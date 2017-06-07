//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AXRuntime/NSObject-Protocol.h>

@class NSArray, NSNumber, NSObject, NSString;
@protocol UIElementProtocol;

@protocol UIElementProtocol <NSObject>
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 forApplication:(struct __AXUIElement *)arg2 contextId:(unsigned int)arg3;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1 hitTestOrientation:(int)arg2;
+ (id)uiElementAtCoordinate:(struct CGPoint)arg1;
+ (void)applyElementAttributeCacheScheme:(int)arg1;
- (_Bool)isMockElement;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3 currentCursorRange:(struct _NSRange)arg4;
- (struct _NSRange)nextCursorRangeInDirection:(unsigned long long)arg1 unit:(unsigned long long)arg2 outputRange:(struct _NSRange *)arg3;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2 synchronous:(_Bool)arg3;
- (void)setAXAttribute:(int)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(int)arg1 withArray:(NSArray *)arg2;
- (void)setAXAttribute:(int)arg1 withUIElementArray:(NSArray *)arg2;
- (void)setAXAttribute:(int)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(int)arg1 withRange:(struct _NSRange)arg2;
- (void)setAXAttribute:(int)arg1 withSize:(struct CGSize)arg2;
- (void)setAXAttribute:(int)arg1 withPoint:(struct CGPoint)arg2;
- (void)setAXAttribute:(int)arg1 withNumber:(NSNumber *)arg2;
- (void)setAXAttribute:(int)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(int)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(int)arg1 withString:(NSString *)arg2;
- (void)setAXAttribute:(int)arg1 withBOOL:(_Bool)arg2;
- (NSArray *)previousElementsWithCount:(unsigned long long)arg1;
- (NSArray *)nextElementsWithCount:(unsigned long long)arg1;
- (void)updateCacheWithAttributes:(NSArray *)arg1;
- (void)updateCache:(int)arg1;
- (void)disableCache;
- (void)enableCache:(_Bool)arg1;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (_Bool)performAXAction:(int)arg1 withValue:(id)arg2;
- (_Bool)performAXAction:(int)arg1;
- (_Bool)canPerformAXAction:(int)arg1;
- (int)pid;
- (id)objectWithAXAttribute:(int)arg1 parameter:(void *)arg2;
- (NSArray *)uiElementsWithAttribute:(int)arg1 parameter:(void *)arg2 fetchAttributes:(_Bool)arg3;
- (NSArray *)uiElementsWithAttribute:(int)arg1 parameter:(void *)arg2;
- (NSArray *)uiElementsWithAttribute:(int)arg1;
- (id)objectWithAXAttribute:(int)arg1;
- (struct CGColor *)colorWithAXAttribute:(int)arg1;
- (struct _NSRange)rangeWithAXAttribute:(int)arg1;
- (struct CGPoint)pointWithAXAttribute:(int)arg1;
- (struct CGPath *)pathWithAXAttribute:(int)arg1;
- (struct CGRect)rectWithAXAttribute:(int)arg1;
- (NSNumber *)numberWithAXAttribute:(int)arg1;
- (_Bool)boolWithAXAttribute:(int)arg1;
- (NSString *)stringWithAXAttribute:(int)arg1;
- (NSArray *)arrayWithAXAttribute:(int)arg1;
- (_Bool)isValidForApplication:(NSObject<UIElementProtocol> *)arg1;
- (_Bool)isValid;
@end
