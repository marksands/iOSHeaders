//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, RTAction;

@interface RTActionCondition : NSObject <NSSecureCoding>
{
    RTAction *_action;
    NSArray *_dateIntervals;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *dateIntervals; // @synthesize dateIntervals=_dateIntervals;
@property(readonly, nonatomic) RTAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToActionCondition:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1 dateIntervals:(id)arg2;
- (id)init;

@end

