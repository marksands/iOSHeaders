//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SALCMAddContentToWatchList : SABaseClientBoundCommand
{
}

+ (id)addContentToWatchListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)addContentToWatchList;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *contentIdentifiers;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
