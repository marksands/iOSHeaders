//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject
{
    NSData *_userImageData;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSData *userImageData; // @synthesize userImageData=_userImageData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

