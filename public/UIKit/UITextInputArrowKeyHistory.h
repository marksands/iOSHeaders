//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UITextPosition;

__attribute__((visibility("hidden")))
@interface UITextInputArrowKeyHistory : NSObject
{
    UITextPosition *startPosition;
    long long amount;
    int anchor;
    UITextPosition *start;
    UITextPosition *end;
    UITextPosition *cursor;
    _Bool affinityDownstream;
}

@property(nonatomic) long long amount; // @synthesize amount;
@property(nonatomic) _Bool affinityDownstream; // @synthesize affinityDownstream;
@property(retain, nonatomic) UITextPosition *end; // @synthesize end;
@property(retain, nonatomic) UITextPosition *start; // @synthesize start;
@property(retain, nonatomic) UITextPosition *cursor; // @synthesize cursor;
@property(nonatomic) int anchor; // @synthesize anchor;
@property(retain, nonatomic) UITextPosition *startPosition; // @synthesize startPosition;
- (void)dealloc;

@end

