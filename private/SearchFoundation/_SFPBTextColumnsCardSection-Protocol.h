//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBPunchout, _SFPBTextColumn;

@protocol _SFPBTextColumnsCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *columns;
@property(readonly, nonatomic) _Bool hasTitleWeight;
@property(nonatomic) unsigned int titleWeight;
@property(readonly, nonatomic) _Bool hasTitle;
@property(copy, nonatomic) NSString *title;
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
- (_SFPBTextColumn *)columnsAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnsCount;
- (void)addColumns:(_SFPBTextColumn *)arg1;
- (void)clearColumns;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end

