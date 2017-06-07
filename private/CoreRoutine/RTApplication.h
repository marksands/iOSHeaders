//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSString;

@interface RTApplication : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_bundleId;
    NSString *_localizedDisplayName;
    long long _capabilities;
}

+ (id)capabilitiesToString:(long long)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 localizedDisplayName:(id)arg2 capabilities:(long long)arg3;

@end

