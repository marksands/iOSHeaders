//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EKAvailabilitySpan, NSDate;

__attribute__((visibility("hidden")))
@interface EKAvailabilityCachedSpan : NSObject
{
    NSDate *_creationDate;
    EKAvailabilitySpan *_span;
}

@property(retain, nonatomic) EKAvailabilitySpan *span; // @synthesize span=_span;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void).cxx_destruct;
- (id)description;

@end

