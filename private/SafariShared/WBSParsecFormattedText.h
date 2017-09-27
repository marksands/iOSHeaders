//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

@class NSNumber, NSString, WBSParsecImageRepresentation;

@interface WBSParsecFormattedText : WBSParsecModel
{
    _Bool _emphasized;
    NSString *_text;
    WBSParsecImageRepresentation *_glyphRepresentation;
    NSNumber *_spaceBeforeInPoints;
    NSNumber *_spaceAfterInPoints;
}

+ (id)schema;
@property(readonly, nonatomic) NSNumber *spaceAfterInPoints; // @synthesize spaceAfterInPoints=_spaceAfterInPoints;
@property(readonly, nonatomic) NSNumber *spaceBeforeInPoints; // @synthesize spaceBeforeInPoints=_spaceBeforeInPoints;
@property(readonly, nonatomic) WBSParsecImageRepresentation *glyphRepresentation; // @synthesize glyphRepresentation=_glyphRepresentation;
@property(readonly, nonatomic, getter=isEmphasized) _Bool emphasized; // @synthesize emphasized=_emphasized;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)glyphWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

