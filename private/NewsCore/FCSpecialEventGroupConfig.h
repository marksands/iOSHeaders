//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCGroupConfig.h>

@class NSArray, NSDictionary, NSString;

@interface FCSpecialEventGroupConfig : FCGroupConfig
{
    NSArray *_specialEventItems;
    NSDictionary *_specialEventsArticleMetadataByArticleID;
    NSArray *_breakingNewsArticleIDs;
    NSArray *_specialEventArticleIDs;
}

@property(retain, nonatomic) NSArray *specialEventArticleIDs; // @synthesize specialEventArticleIDs=_specialEventArticleIDs;
@property(retain, nonatomic) NSArray *breakingNewsArticleIDs; // @synthesize breakingNewsArticleIDs=_breakingNewsArticleIDs;
@property(readonly, nonatomic) NSDictionary *specialEventsArticleMetadataByArticleID; // @synthesize specialEventsArticleMetadataByArticleID=_specialEventsArticleMetadataByArticleID;
@property(retain, nonatomic) NSArray *specialEventItems; // @synthesize specialEventItems=_specialEventItems;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *groupMicaAnimationFileURLStringiPad;
@property(readonly, nonatomic) NSString *groupMicaAnimationFileURLString;
- (id)initWithDictionary:(id)arg1;

@end

