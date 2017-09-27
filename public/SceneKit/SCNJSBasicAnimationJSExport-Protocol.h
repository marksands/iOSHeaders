//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"

@class CAMediaTimingFunction, NSString;

@protocol SCNJSBasicAnimationJSExport <JSExport>
+ (id)animationWithKeyPath:(NSString *)arg1;
@property(copy) NSString *fillMode;
@property _Bool autoreverses;
@property double repeatDuration;
@property float repeatCount;
@property double timeOffset;
@property float speed;
@property double beginTime;
@property(getter=isRemovedOnCompletion) _Bool removedOnCompletion;
@property(retain) CAMediaTimingFunction *timingFunction;
@property double duration;
@property(getter=isCumulative) _Bool cumulative;
@property(getter=isAdditive) _Bool additive;
@property(copy) NSString *keyPath;
@property(retain) id byValue;
@property(retain) id toValue;
@property(retain) id fromValue;
@end

