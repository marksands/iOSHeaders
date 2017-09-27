//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKPlayerInternal.h>

@class NSString;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal
{
    GKPlayerInternal *_hostPlayerInternal;
    NSString *_guestIdentifier;
}

+ (id)secureCodedPropertyKeys;
- (void)setGuestIdentifier:(id)arg1;
- (id)guestIdentifier;
@property(retain, nonatomic) GKPlayerInternal *hostPlayerInternal; // @synthesize hostPlayerInternal=_hostPlayerInternal;
- (_Bool)isGuestPlayer;
- (id)playerID;
- (id)initWithHostPlayerInternal:(id)arg1 guestIdentifier:(id)arg2;
- (void)dealloc;

@end

