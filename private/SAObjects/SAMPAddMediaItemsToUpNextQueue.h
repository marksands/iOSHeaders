//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand
{
}

+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addMediaItemsToUpNextQueue;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SAMPCollection *mediaCollection;
@property(copy, nonatomic) NSString *insertLocation;
@property(copy, nonatomic) NSArray *hashedRouteUIDs;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

