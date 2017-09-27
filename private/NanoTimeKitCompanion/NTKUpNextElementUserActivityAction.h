//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUpNextElementAction.h>

@class NSString, NSUserActivity;

@interface NTKUpNextElementUserActivityAction : NTKUpNextElementAction
{
    NSUserActivity *_userActivity;
    NSString *_applicationID;
}

@property(readonly, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(readonly, copy, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)_perform;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserActivity:(id)arg1 applicationID:(id)arg2;

@end

