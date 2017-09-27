//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterFoundation/GKBasePlayer.h>

#import "NSCoding.h"
#import "NSSecureCoding.h"

@class GKGame, GKPlayerInternal, NSArray, NSAttributedString, NSDate, NSString;

@interface GKPlayer : GKBasePlayer <NSCoding, NSSecureCoding>
{
    GKPlayerInternal *_internal;
    NSAttributedString *_whenString;
    NSArray *_friends;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)loadCompletePlayersForPlayers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)_loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadPlayersForLegacyIdentifiers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)cacheKeyForPlayerID:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)anonymousGuestPlayerWithIdentifier:(id)arg1;
+ (id)automatchPlayer;
+ (id)unknownPlayer;
+ (id)anonymousPlayer;
+ (id)canonicalizedPlayerForInternal:(id)arg1;
+ (id)playerFromPlayerID:(id)arg1;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(retain, nonatomic) NSAttributedString *whenString; // @synthesize whenString=_whenString;
@property(retain) GKPlayerInternal *internal; // @synthesize internal=_internal;
- (_Bool)isFriendablePlayer;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)sortName;
@property(readonly, nonatomic) NSString *displayName;
- (id)displayNameWithOptions:(unsigned char)arg1;
- (void)loadProfileWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)identifierForIDS;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadGamesPlayedIncludingInstalledGames:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadGamesPlayed:(CDUnknownBlockType)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)loadCommonFriends:(_Bool)arg1 asPlayersWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadFriendsAsPlayersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)postChangeNotification;
- (void)_postChangeNotification;
@property(readonly, nonatomic) _Bool isFamiliarFriend;
@property(readonly, nonatomic) _Bool hasPhoto;
- (id)emails;
- (id)email;
@property(readonly, nonatomic) NSString *cacheKey;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(readonly, nonatomic) CDStruct_c6d350ec stats;
@property(readonly, nonatomic) GKGame *lastPlayedGame;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)minimalPlayer;
@property(readonly) NSString *referenceKey;

// Remaining properties
@property(copy, nonatomic) NSString *alias; // @dynamic alias;
@property(readonly, nonatomic) NSString *firstName; // @dynamic firstName;
@property(readonly, nonatomic) NSString *guestIdentifier; // @dynamic guestIdentifier;
@property(readonly, nonatomic) _Bool isAnonymousPlayer; // @dynamic isAnonymousPlayer;
@property(readonly, nonatomic) _Bool isAutomatchPlayer; // @dynamic isAutomatchPlayer;
@property(nonatomic) _Bool isFriend; // @dynamic isFriend;
@property(readonly, nonatomic) _Bool isLocalPlayer; // @dynamic isLocalPlayer;
@property(readonly, nonatomic) _Bool isUnknownPlayer; // @dynamic isUnknownPlayer;
@property(readonly, nonatomic) NSString *lastName; // @dynamic lastName;
@property(readonly, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded; // @dynamic loaded;
@property(nonatomic) unsigned long long numberOfFriends; // @dynamic numberOfFriends;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) NSString *reason2; // @dynamic reason2;
@property(nonatomic) unsigned int rid; // @dynamic rid;
@property(nonatomic) int source; // @dynamic source;
@property(copy, nonatomic) NSString *status; // @dynamic status;

@end

