//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSTextAttachmentContainer.h"

@class NSData, NSFileWrapper, NSString, UIImage, UITextAttachmentView, UIView;

@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSCoding>
{
    NSData *_data;
    NSString *_uti;
    NSString *_cacheKey;
    struct CGRect _bounds;
    double _layoutPadding;
    struct {
        unsigned int _allowsTextAttachmentView:1;
        unsigned int _embeddingType:4;
        unsigned int _standaloneAlignment:3;
    } _taFlags;
    NSFileWrapper *_fileWrapper;
    UIImage *_image;
    UITextAttachmentView *_wrapperView;
}

+ (void)registerTextAttachmentClass:(Class)arg1 forFileType:(id)arg2;
+ (Class)textAttachmentClassForFileType:(id)arg1;
+ (void)registerTextAttachmentViewProviderClass:(Class)arg1 forFileType:(id)arg2;
+ (Class)textAttachmentViewProviderClassForFileType:(id)arg1;
+ (id)imageCache;
+ (void)initialize;
@property(readonly, copy) NSString *description;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (_Bool)usesTextAttachmentView;
- (Class)textAttachmentViewProviderClass;
- (void)setAllowsTextAttachmentView:(_Bool)arg1;
- (_Bool)allowsTextAttachmentView;
- (void)setLineLayoutPadding:(double)arg1;
- (double)lineLayoutPadding;
- (void)setStandaloneAlignment:(long long)arg1;
- (long long)standaloneAlignment;
- (void)setEmbeddingType:(long long)arg1;
- (long long)embeddingType;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
@property(nonatomic) struct CGRect bounds; // @dynamic bounds;
- (struct CGRect)drawingBounds;
- (void)setDrawingBounds:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *image; // @dynamic image;
- (void)_invalidateWrapperView;
- (id)attachmentCell;
@property(retain) UIView *contentView;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSFileWrapper *fileWrapper;
@property(copy, nonatomic) NSString *fileType; // @dynamic fileType;
@property(copy, nonatomic) NSData *contents; // @dynamic contents;
- (void)dealloc;
- (id)initWithFileWrapper:(id)arg1;
- (id)init;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)_image;
- (id)_cacheKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

