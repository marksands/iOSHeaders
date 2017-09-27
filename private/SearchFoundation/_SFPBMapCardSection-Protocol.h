//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBLatLng, _SFPBMapRegion, _SFPBPunchout;

@protocol _SFPBMapCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) _Bool hasPinBehavior;
@property(nonatomic) int pinBehavior;
@property(readonly, nonatomic) _Bool hasBoundingMapRegion;
@property(retain, nonatomic) _SFPBMapRegion *boundingMapRegion;
@property(readonly, nonatomic) _Bool hasSizeFormat;
@property(nonatomic) int sizeFormat;
@property(readonly, nonatomic) _Bool hasInteractive;
@property(nonatomic) _Bool interactive;
@property(readonly, nonatomic) _Bool hasFootnote;
@property(copy, nonatomic) NSString *footnote;
@property(readonly, nonatomic) _Bool hasFootnoteLabel;
@property(copy, nonatomic) NSString *footnoteLabel;
@property(readonly, nonatomic) _Bool hasPinColor;
@property(retain, nonatomic) _SFPBColor *pinColor;
@property(readonly, nonatomic) _Bool hasLocation;
@property(retain, nonatomic) _SFPBLatLng *location;
@property(readonly, nonatomic) _Bool hasBackgroundColor;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(readonly, nonatomic) _Bool hasSeparatorStyle;
@property(nonatomic) int separatorStyle;
@property(readonly, nonatomic) _Bool hasType;
@property(copy, nonatomic) NSString *type;
@property(readonly, nonatomic) _Bool hasHasBottomPadding;
@property(nonatomic) _Bool hasBottomPadding;
@property(readonly, nonatomic) _Bool hasHasTopPadding;
@property(nonatomic) _Bool hasTopPadding;
@property(readonly, nonatomic) _Bool hasCanBeHidden;
@property(nonatomic) _Bool canBeHidden;
@property(readonly, nonatomic) _Bool hasPunchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(readonly, nonatomic) _Bool hasPunchoutPickerTitle;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

