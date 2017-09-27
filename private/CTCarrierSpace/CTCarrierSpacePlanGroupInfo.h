//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSArray, NSString;

@interface CTCarrierSpacePlanGroupInfo : NSObject <NSSecureCoding>
{
    long long _planCategory;
    NSArray *_groupOptionsList;
    NSString *_groupId;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) NSArray *groupOptionsList; // @synthesize groupOptionsList=_groupOptionsList;
@property(nonatomic) long long planCategory; // @synthesize planCategory=_planCategory;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

