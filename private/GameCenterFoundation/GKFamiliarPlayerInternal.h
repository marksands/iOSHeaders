//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKPlayerInternal.h>

@class NSString;

@interface GKFamiliarPlayerInternal : GKPlayerInternal
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_compositeName;
}

+ (id)secureCodedPropertyKeys;
+ (_Bool)supportsSecureCoding;
- (void)setCompositeName:(id)arg1;
- (id)compositeName;
- (void)setLastName:(id)arg1;
- (id)lastName;
- (void)setFirstName:(id)arg1;
- (id)firstName;
- (void)dealloc;

@end

