//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection
{
}

+ (id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)albumCollection;
@property(copy, nonatomic) NSString *sortArtist;
@property(copy, nonatomic) NSString *description;
@property(copy, nonatomic) NSString *artist;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

