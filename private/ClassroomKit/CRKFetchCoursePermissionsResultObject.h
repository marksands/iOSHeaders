//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject
{
    NSDictionary *_permissionsByFeature;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *permissionsByFeature; // @synthesize permissionsByFeature=_permissionsByFeature;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

