//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BSEqualsBuilder : NSObject
{
    _Bool _equal;
}

+ (id)builderWithObject:(id)arg1 ofExpectedClass:(Class)arg2;
+ (id)builder;
- (id)appendArray:(id)arg1 counterpart:(CDUnknownBlockType)arg2;
- (_Bool)isEqual;
- (id)appendString:(id)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendPointer:(void *)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendObject:(id)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendClass:(Class)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGRect:(struct CGRect)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGSize:(struct CGSize)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGPoint:(struct CGPoint)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendCGFloat:(double)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendDouble:(double)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendFloat:(float)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendSizeT:(unsigned long long)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendInteger:(long long)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendBool:(_Bool)arg1 counterpart:(CDUnknownBlockType)arg2;
- (id)appendEqualsBlocks:(CDUnknownBlockType)arg1;
- (id)_initWithInitialState:(_Bool)arg1;
- (id)init;

@end

