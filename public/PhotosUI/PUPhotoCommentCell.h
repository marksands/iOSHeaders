//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PLCloudSharedComment, UILabel, UITextView, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoCommentCell : UITableViewCell
{
    _Bool _usesCompactSeparators;
    UITextView *_commentContentTextView;
    UILabel *_commentBylineLabel;
    UIView *_styledSeparatorView;
    PLCloudSharedComment *_comment;
}

+ (id)_attributionStringForComment:(id)arg1;
+ (id)_commentStringForComment:(id)arg1;
+ (double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
+ (Class)layerClass;
+ (id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(_Bool)arg2;
@property(nonatomic) _Bool usesCompactSeparators; // @synthesize usesCompactSeparators=_usesCompactSeparators;
@property(copy, nonatomic) PLCloudSharedComment *comment; // @synthesize comment=_comment;
@property(readonly, retain, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;
@property(readonly, retain, nonatomic) UILabel *commentBylineLabel; // @synthesize commentBylineLabel=_commentBylineLabel;
@property(readonly, retain, nonatomic) UITextView *commentContentTextView; // @synthesize commentContentTextView=_commentContentTextView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateContent;
- (void)delete:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

