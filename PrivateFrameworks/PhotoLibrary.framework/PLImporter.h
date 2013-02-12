/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, NSRecursiveLock, NSSet, NSThread;

@interface PLImporter : NSObject {
    NSRecursiveLock *_accessLock;
    NSSet *_audioFileExtensions;
    BOOL _cancelCurrentImport;
    NSSet *_extraVideoExtensions;
    NSSet *_imageFileExtensions;
    NSMutableArray *_importQueue;
    NSSet *_rawImageFileExtensions;
    NSThread *_workerThread;
}

+ (BOOL)importInProgress;
+ (id)sharedImporter;

- (void)_loadFileExtensionInformation;
- (void)_removeOrphanedMediaFilesFromDirectories:(id)arg1;
- (void)_removeOrphanedMediaFilesFromDirectory:(id)arg1;
- (BOOL)_testAndClearCancelImportFlag;
- (void)addDirectoryToOrphanChecklist:(id)arg1;
- (id)cancelAllImports;
- (void)checkDirectoriesInOrphanChecklist;
- (void)dealloc;
- (int)identifierForNewImportSession;
- (id)init;
- (BOOL)isAudioFileExtension:(id)arg1;
- (BOOL)isImageFileExtension:(id)arg1;
- (BOOL)isNonRawImageFileExtension:(id)arg1;
- (BOOL)isRawImageFileExtension:(id)arg1;
- (BOOL)isVideoFileExtension:(id)arg1;
- (id)masterExtensionFromExtensions:(id)arg1;
- (void)notifyFailureOnMainThread:(id)arg1;
- (void)notifyOnMainThread:(id)arg1;
- (void)notifySuccessOnMainThread:(id)arg1;
- (int)priorityForFileExtension:(id)arg1;
- (void)queueImportFileAtPath:(id)arg1 intoEvent:(id)arg2 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg3 importSessionIdentifier:(int)arg4;
- (void)queueImportFilesAtDirectoryPath:(id)arg1 baseName:(id)arg2 extensions:(id)arg3 intoEvent:(id)arg4 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg5 importSessionIdentifier:(int)arg6;
- (int)queuedImportCount;
- (void)removeDirectoryFromOrphanChecklist:(id)arg1;
- (void)workerThread:(id)arg1;

@end