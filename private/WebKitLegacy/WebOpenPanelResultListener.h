//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebOpenPanelResultListener.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener>
{
    struct RefPtr<WebCore::FileChooser> _chooser;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)chooseFilenames:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilename:(id)arg1 displayString:(id)arg2 iconImage:(struct CGImage *)arg3;
- (void)chooseFilenames:(id)arg1;
- (void)chooseFilename:(id)arg1;
- (void)cancel;
- (id)initWithChooser:(struct FileChooser *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

