//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface XCPointerEventPath : NSObject <NSSecureCoding>
{
    NSMutableArray *_pointerEvents;
    _Bool _immutable;
    unsigned long long _pathType;
    unsigned long long _index;
}

+ (_Bool)supportsSecureCoding;
@property _Bool immutable; // @synthesize immutable=_immutable;
@property unsigned long long index; // @synthesize index=_index;
@property(readonly) unsigned long long pathType; // @synthesize pathType=_pathType;
- (id)description;
- (id)firstEventAfterOffset:(double)arg1;
- (id)lastEventBeforeOffset:(double)arg1;
- (void)_addPointerEvent:(id)arg1;
- (void)releaseButton:(unsigned long long)arg1 atOffset:(double)arg2;
- (void)pressButton:(unsigned long long)arg1 atOffset:(double)arg2;
- (void)liftUpAtOffset:(double)arg1;
- (void)moveToPoint:(struct CGPoint)arg1 atOffset:(double)arg2;
- (void)pressDownWithPressure:(double)arg1 atOffset:(double)arg2;
- (void)pressDownAtOffset:(double)arg1;
@property(readonly) NSArray *pointerEvents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForMouseAtPoint:(struct CGPoint)arg1 offset:(double)arg2;
- (id)initForTouchAtPoint:(struct CGPoint)arg1 offset:(double)arg2;
- (id)init;
- (void)dealloc;

@end

