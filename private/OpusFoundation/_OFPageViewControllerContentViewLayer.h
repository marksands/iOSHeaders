//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class OFPageViewController;

@interface _OFPageViewControllerContentViewLayer : CALayer
{
    OFPageViewController *_progressReportDelegate;
    double _progress;
}

+ (_Bool)needsDisplayForKey:(id)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) OFPageViewController *progressReportDelegate; // @synthesize progressReportDelegate=_progressReportDelegate;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;

@end

