//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class CMDrawingContext, NSString, OADOrientedBounds, ODDPoint;

__attribute__((visibility("hidden")))
@interface CMDiagramPointMapper : CMMapper
{
    ODDPoint *mPoint;
    CMDrawingContext *mDrawingContext;
    OADOrientedBounds *mOrientedBounds;
    NSString *mPresentationName;
}

- (void).cxx_destruct;
- (float)defaultFontSize;
- (id)diagram;
- (id)baseTextListStyleWithBounds:(id)arg1 isCentered:(_Bool)arg2;
- (id)plainText;
- (id)transformPresentationName;
- (id)transformForPresentationWithName:(id)arg1;
- (void)mapSiblingTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;
- (void)mapChildrenTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;
- (void)mapTextAt:(id)arg1 withBounds:(id)arg2 isCentered:(_Bool)arg3 includeChildren:(_Bool)arg4 withState:(id)arg5;
- (void)renderShapeAsBackgroundInBounds:(id)arg1;
- (id)stroke;
- (id)fill;
- (void)applyDiagramStyleToShapeProperties;
- (id)styleMatrix;
- (id)shapeStyle;
- (id)presentationWithName:(id)arg1;
- (void)mapChlidrenAt:(id)arg1 withState:(id)arg2;
- (void)setPresentationName:(id)arg1;
- (id)presentationName;
- (void)mapStyledRectangle:(struct CGRect)arg1 at:(id)arg2 withState:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithPoint:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;
- (void)mapPointTextAt:(id)arg1 style:(id)arg2 level:(int)arg3 withState:(id)arg4;

@end

