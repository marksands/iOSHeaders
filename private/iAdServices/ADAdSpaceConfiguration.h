//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet, NSString, NSURL;

@interface ADAdSpaceConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    int _creativeType;
    float _containerWidth;
    float _containerHeight;
    float _reorientedContainerWidth;
    float _reorientedContainerHeight;
    long long _options;
    NSString *_identifier;
    NSURL *_serverURL;
    NSString *_advertisingSection;
    NSString *_authenticationUserName;
    NSSet *_context;
    NSString *_adSpaceContextJSON;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) float reorientedContainerHeight; // @synthesize reorientedContainerHeight=_reorientedContainerHeight;
@property(nonatomic) float reorientedContainerWidth; // @synthesize reorientedContainerWidth=_reorientedContainerWidth;
@property(nonatomic) float containerHeight; // @synthesize containerHeight=_containerHeight;
@property(nonatomic) float containerWidth; // @synthesize containerWidth=_containerWidth;
@property(copy, nonatomic) NSString *adSpaceContextJSON; // @synthesize adSpaceContextJSON=_adSpaceContextJSON;
@property(copy, nonatomic) NSSet *context; // @synthesize context=_context;
@property(copy, nonatomic) NSString *authenticationUserName; // @synthesize authenticationUserName=_authenticationUserName;
@property(copy, nonatomic) NSString *advertisingSection; // @synthesize advertisingSection=_advertisingSection;
@property(copy, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(nonatomic) int creativeType; // @synthesize creativeType=_creativeType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

