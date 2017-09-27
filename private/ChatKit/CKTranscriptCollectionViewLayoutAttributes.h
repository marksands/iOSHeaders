//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayoutAttributes.h"

@class CKChatItem, NSMutableArray;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    struct CGRect _targetFrame;
    struct CGRect _currentFrame;
    double _easing;
    double _targetEasing;
    BOOL _orientation;
    struct CATransform3D _contentTransform3D;
    double _targetCenterY;
    double _currentCenterY;
    double _height;
    double _factor;
    _Bool _hidden;
    double _associatedVerticalShift;
    NSMutableArray *_associatedLayoutAttributes;
    CKTranscriptCollectionViewLayoutAttributes *_initialParentLayoutAttributes;
    CKChatItem *_chatItem;
    struct CGSize _parentChatItemSize;
}

@property(nonatomic) struct CGSize parentChatItemSize; // @synthesize parentChatItemSize=_parentChatItemSize;
@property(retain, nonatomic) CKChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property(readonly, nonatomic) struct CATransform3D contentTransform3D; // @synthesize contentTransform3D=_contentTransform3D;
- (void).cxx_destruct;
- (void)setAlphaOrFilterLevel:(double)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

