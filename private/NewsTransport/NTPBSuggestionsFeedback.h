//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBSuggestionsFeedback : PBCodable <NSCopying>
{
    NSString *_feedback;
    NSMutableArray *_grades;
}

+ (Class)gradesType;
@property(retain, nonatomic) NSString *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSMutableArray *grades; // @synthesize grades=_grades;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasFeedback;
- (id)gradesAtIndex:(unsigned long long)arg1;
- (unsigned long long)gradesCount;
- (void)addGrades:(id)arg1;
- (void)clearGrades;

@end

