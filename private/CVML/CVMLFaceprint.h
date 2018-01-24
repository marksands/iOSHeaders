//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CVMLFaceprintModel.h"
#import "NSSecureCoding.h"

@class NSData, NSString;

@interface CVMLFaceprint : NSObject <CVMLFaceprintModel, NSSecureCoding>
{
    unsigned int _platform;
    unsigned int _profile;
    NSData *_faceprint;
    NSString *_key;
    NSString *_faceprintInputPath;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSString *faceprintInputPath; // @synthesize faceprintInputPath=_faceprintInputPath;
@property unsigned int profile; // @synthesize profile=_profile;
@property unsigned int platform; // @synthesize platform=_platform;
@property(copy) NSString *key; // @synthesize key=_key;
@property(retain) NSData *faceprint; // @synthesize faceprint=_faceprint;
- (void).cxx_destruct;
- (id)computeDistanceToFaceprint:(id)arg1 withDistanceFunction:(long long)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

