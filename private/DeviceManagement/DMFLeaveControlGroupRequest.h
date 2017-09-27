//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskRequest.h"

@class DMFControlGroupIdentifier, NSArray;

@interface DMFLeaveControlGroupRequest : CATTaskRequest
{
    DMFControlGroupIdentifier *_groupIdentifier;
    NSArray *_leaderIdentifiers;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *leaderIdentifiers; // @synthesize leaderIdentifiers=_leaderIdentifiers;
@property(retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

