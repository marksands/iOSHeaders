//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBNoteContent.h"

@class NSString, _INPBImageNoteContent, _INPBTextNoteContent;

@interface _INPBNoteContent : PBCodable <_INPBNoteContent, NSSecureCoding, NSCopying>
{
    CDStruct_f953fb60 _has;
    int _type;
    _INPBImageNoteContent *_image;
    _INPBTextNoteContent *_text;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) _INPBTextNoteContent *text; // @synthesize text=_text;
@property(retain, nonatomic) _INPBImageNoteContent *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly, nonatomic) _Bool hasImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

