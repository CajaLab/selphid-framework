
#import <Foundation/Foundation.h>
#import "FPhiWidgetFrameObj.h"
/**
    Set of behavior that is expected of an object in a given situation
 */
@protocol FPhiSelphIDWidgetProtocol <NSObject>

/**
    Invoked when the extraction process is finished.
    - Mandatory method
 */
-(void)CaptureFinished;


@optional

/**
 Invoked when the extraction process fail.
 - Optional method
 */
-(void)CaptureFailed:(NSError *) error;

/**
 Invoked when extraction process is cancelled by user.
 - Optional method
 */
-(void)CaptureCancelled;

/**
 Invoked when extraction process is aborted by timeout.
 - Optional method
 */
-(void)CaptureTimeout;


@end
