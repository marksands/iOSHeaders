//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICNoteSnippetUtilities : NSObject
{
}

+ (id)stringByRemovingTitle:(id)arg1 fromString:(id)arg2;
+ (id)snippetForContent:(id)arg1;
+ (id)titleForContent:(id)arg1 truncated:(_Bool *)arg2;
+ (struct _NSRange)rangeForTitleInContent:(id)arg1 truncated:(_Bool *)arg2;
+ (id)snippetAndTitleTrimCharacterSet;

@end

