//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray;

__attribute__((visibility("hidden")))
@interface TSTStrokeDefaultVendor : NSObject
{
    _Bool _isValid;
    id <TSTTableStrokeProviding> _strokeProvider;
    id <TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding> _tableProvider;
    NSPointerArray *_strokeTypeToLayerMap;
    struct _NSRange _headerSideBorderColumnRange;
    struct _NSRange _headerColumnSeparatorColumnRange;
    struct _NSRange _bodySideBorderColumnRange;
    struct _NSRange _topBorderRowRange;
    struct _NSRange _headerRowSeparatorRowRange;
    struct _NSRange _footerRowSeparatorRowRange;
    struct _NSRange _bottomBorderRowRange;
}

@property(nonatomic) struct _NSRange bottomBorderRowRange; // @synthesize bottomBorderRowRange=_bottomBorderRowRange;
@property(nonatomic) struct _NSRange footerRowSeparatorRowRange; // @synthesize footerRowSeparatorRowRange=_footerRowSeparatorRowRange;
@property(nonatomic) struct _NSRange headerRowSeparatorRowRange; // @synthesize headerRowSeparatorRowRange=_headerRowSeparatorRowRange;
@property(nonatomic) struct _NSRange topBorderRowRange; // @synthesize topBorderRowRange=_topBorderRowRange;
@property(nonatomic) struct _NSRange bodySideBorderColumnRange; // @synthesize bodySideBorderColumnRange=_bodySideBorderColumnRange;
@property(nonatomic) struct _NSRange headerColumnSeparatorColumnRange; // @synthesize headerColumnSeparatorColumnRange=_headerColumnSeparatorColumnRange;
@property(nonatomic) struct _NSRange headerSideBorderColumnRange; // @synthesize headerSideBorderColumnRange=_headerSideBorderColumnRange;
@property(retain, nonatomic) NSPointerArray *strokeTypeToLayerMap; // @synthesize strokeTypeToLayerMap=_strokeTypeToLayerMap;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(nonatomic) __weak id <TSTTableHiddenRowColumnProviding><TSTTableInternalGeometryProviding> tableProvider; // @synthesize tableProvider=_tableProvider;
@property(nonatomic) __weak id <TSTTableStrokeProviding> strokeProvider; // @synthesize strokeProvider=_strokeProvider;
- (void).cxx_destruct;
- (void)p_updateStrokeLayer:(id)arg1 forRowStrokeType:(int)arg2;
- (void)p_updateStrokeLayer:(id)arg1 forColumnStrokeType:(int)arg2;
- (int)p_strokeTypeForRow:(unsigned int)arg1;
- (int)p_strokeTypeForColumn:(unsigned int)arg1;
- (int)validateChangeDescriptors:(id)arg1;
- (_Bool)validateGeometry;
- (void)invalidate;
- (id)strokeLayerForStrokeType:(int)arg1;
- (id)strokeLayerForRow:(unsigned int)arg1;
- (id)strokeLayerForColumn:(unsigned int)arg1;
- (id)initWithStrokeProvider:(id)arg1 tableProvider:(id)arg2;

@end

