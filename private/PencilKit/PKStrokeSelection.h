//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/UIItemProviderReading-Protocol.h>
#import <PencilKit/UIItemProviderWriting-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, PKDrawing, PKStroke, UIImage;

@interface PKStrokeSelection : NSObject <UIItemProviderReading, UIItemProviderWriting>
{
    NSMutableOrderedSet *_strokes;
    PKStroke *_lassoStroke;
    UIImage *_strokeImage;
    PKDrawing *_drawing;
}

+ (id)strokeSelectionFromData:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
@property(readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) UIImage *strokeImage; // @synthesize strokeImage=_strokeImage;
@property(readonly, nonatomic) PKStroke *lassoStroke; // @synthesize lassoStroke=_lassoStroke;
@property(readonly, nonatomic) NSMutableOrderedSet *strokes; // @synthesize strokes=_strokes;
- (void).cxx_destruct;
- (id)strokeDataForSelection;
- (id)imageDataForSelection;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (struct CGRect)boundsWithoutLasso;
- (struct CGRect)bounds;
- (id)allStrokes;
- (id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

