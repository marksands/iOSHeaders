//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSNumber;

@interface FCFeedGroupEmittingNumberCursor : FCFeedGroupEmittingCursor
{
    NSNumber *_number;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSNumber *number; // @synthesize number=_number;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end

