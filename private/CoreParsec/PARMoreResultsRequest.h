//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreParsec/PARRequest.h>

#import "NSSecureCoding.h"

@class NSURL;

@interface PARMoreResultsRequest : PARRequest <NSSecureCoding>
{
    NSURL *_moreResultsURL;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSURL *moreResultsURL; // @synthesize moreResultsURL=_moreResultsURL;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

