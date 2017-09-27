//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOSuggestionEntryList : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_localizedSectionHeader;
    NSMutableArray *_suggestionEntries;
}

+ (Class)suggestionEntriesType;
@property(retain, nonatomic) NSString *localizedSectionHeader; // @synthesize localizedSectionHeader=_localizedSectionHeader;
@property(retain, nonatomic) NSMutableArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasLocalizedSectionHeader;
- (id)suggestionEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntriesCount;
- (void)addSuggestionEntries:(id)arg1;
- (void)clearSuggestionEntries;

@end

