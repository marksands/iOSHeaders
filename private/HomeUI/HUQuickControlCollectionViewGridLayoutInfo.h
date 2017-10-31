//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HUQuickControlCollectionViewGridLayoutInfo : NSObject
{
    double _maximumRowHeight;
    unsigned long long _sectionIndex;
    NSArray *_rowLayouts;
    struct CGRect _contentFrame;
    CDStruct_217e81bd _configuration;
}

@property(copy, nonatomic) NSArray *rowLayouts; // @synthesize rowLayouts=_rowLayouts;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) double maximumRowHeight; // @synthesize maximumRowHeight=_maximumRowHeight;
@property(nonatomic) CDStruct_217e81bd configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (unsigned long long)numberOfColumnsInRow:(unsigned long long)arg1;
- (id)indexPathForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

@end
