//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSNumber, NSString, UIImage, WBSParsecAuxiliaryInfo, WBSParsecImageRepresentation;

@protocol WBSParsecSearchGenericResult
@property(readonly, nonatomic) WBSParsecImageRepresentation *thumbnail;
@property(readonly, nonatomic) WBSParsecAuxiliaryInfo *auxiliaryInfo;
@property(readonly, nonatomic) WBSParsecImageRepresentation *secondaryTitleGlyph;
@property(readonly, copy, nonatomic) NSString *secondaryTitle;
@property(readonly, copy, nonatomic) NSString *footnote;
@property(readonly, copy, nonatomic) NSArray *descriptionRichTexts;
@property(readonly, nonatomic) NSNumber *titleMaximumLines;
- (UIImage *)thumbnailWithSession:(id <WBSParsecSearchSession>)arg1;
@end

